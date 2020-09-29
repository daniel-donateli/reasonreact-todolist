open State;

[@react.component]
let make = (~todo, ~dispatch) => {
  
  <div>
    <li key={string_of_int(todo.id)}>
      <span>{todo.text |> React.string}
      </span>
      <i className="material-icons md-18" onClick={_ => dispatch(Delete(todo.id))}>{"delete_forever" |> React.string}</i>
    </li>
  </div>;
};
