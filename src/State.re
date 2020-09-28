type todo = {
  text: string,
  id: int,
  completed: bool,
};

type state = {
  todos: list(todo),
};

type action = 
  | Add(string)
  | Check(int)
  | Delete(int);

let id_counter = ref(0);

let getNewId = () => {
  id_counter := id_counter^ + 1;
  id_counter^;
}

let reducer = (state, action) => {
  switch(action) {
    | Add(str) => String.length(str) > 0 ? 
      { todos: List.append(state.todos, [{ text:str, id: getNewId(), completed: false }]) }
      : state
    | Delete(id) => { todos: state.todos |> List.filter(x => x.id !== id) }
    | _ => state
  };
};

let initialState = {
  todos: [
    { id: getNewId(), text: "Item 1", completed: false },
    { id: getNewId(), text: "Item 2", completed: false },
    { id: getNewId(), text: "Item 3", completed: false }
  ]
};
