open State;

[@react.component]
let make = (~todo, ~icon, ~dispatch) => {
  
  <div>
    <li key={string_of_int(todo.id)}>
      {todo.text |> React.string}
      <span onClick={_ => dispatch(Delete(todo.id))}>{"  X" |> React.string}</span>
    </li>
    //<img src={icon} width="30" height="30" alt="delete" />
  </div>;
};
