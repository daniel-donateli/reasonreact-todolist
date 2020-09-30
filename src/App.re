open State;

[@react.component]
let make = () => {
  let (state, dispatch) = React.useReducer(reducer, initialState); 
  
  
  <div className="container">
    <Header dispatch />
    <TodoList todos={state.todos} dispatch/>
  </div>;
};
