open State;

[@react.component]
let make = (~todo, ~dispatch) => {
  
  <li key={string_of_int(todo.id)}>
    <input type_="checkbox" checked={todo.completed} onClick={(_) => dispatch(Check(todo.id))}/>
    <span style={todo.completed ? 
    ReactDOM.Style.make(~textDecoration="line-through", ()) 
    : ReactDOM.Style.make(~textDecoration="none", ())}>
      {todo.text |> React.string}
    </span>
    <i className="material-icons md-18" onClick={_ => dispatch(Delete(todo.id))}>{"delete_forever" |> React.string}</i>
    </li>;
};
