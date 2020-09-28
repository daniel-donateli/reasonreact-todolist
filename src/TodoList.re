open State;

[@react.component]
let make = (~todos, ~icon, ~dispatch) => {
  
  <ul>
    {
      todos 
      |> 
      List.map(todo => <TodoItem todo icon dispatch />)
      |>
      Array.of_list
      |>
      React.array
    }
  </ul>;
};
