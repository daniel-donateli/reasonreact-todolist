

[@react.component]
let make = (~todos, ~dispatch) => {
  
  todos |> List.length > 0 ?
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
  </ul>
  : <p>{"No tasks to do" |> React.string}</p>
};
