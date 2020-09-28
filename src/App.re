open State;

/*
[@bs.module]
external delete_icon : string = "../assets/delete.svg";
*/

[@react.component]
let make = () => {
  let (state, dispatch) = React.useReducer(reducer, initialState); 
  
  
  <div>
    <Header dispatch />
    <TodoList todos={state.todos} icon="" dispatch/>
  </div>;
};
