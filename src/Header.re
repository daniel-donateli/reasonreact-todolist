open State;

[@react.component]
let make = (~dispatch) => {
  let (value, setValue) = React.useState(() => "");

  let onChange = event => {
    let task = event->ReactEvent.Form.target##value;
    setValue(task);
  };

  let onSubmit = event => {
    ReactEvent.Synthetic.preventDefault(event);
    dispatch(Add(value));
    setValue((_) => "");
  };
  
  <form onSubmit>
    <h2>{"What do you want to do?" |> React.string }</h2>
    <input value onChange />
    <button>{"Add Task" |> React.string}</button>
  </form>;
}
