open State;

[@react.component]
let make = (~todos, ~dispatch) => {
  
  <ul>
    {
      todos 
      |> 
      List.map(todo => <TodoItem todo dispatch />)
      |>
      Array.of_list
      |>
      React.array
    }
  </ul>;
};
