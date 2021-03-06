type state = {selected: string};

type action =
  | SetSelected(string);

let reducer = (_, action) =>
  switch (action) {
  | SetSelected(selected) => {selected: selected}
  };

[@react.component]
let make = () => {
  let (state, dispatch) = React.useReducer(reducer, {selected: ""});

  <div>
    <h1> {ReasonReact.string("Click outside demo")} </h1>
    <Dropdown
      selected={state.selected}
      options=[|"milk", "bananas", "oatmeal", "raisins"|]
      selectOption={selected => dispatch(SetSelected(selected))}
    />
    <h1> {ReasonReact.string("ClickObserver demo")} </h1>
    <ClickObserver />
    <h1> {ReasonReact.string("Dom Movement Logging demo")} </h1>
    <DomLogs />
    <h1> {ReasonReact.string("RxJs Dom Movement Logging demo")} </h1>
    <RxJsClickEventDemo />
    <h1> {ReasonReact.string("Wonka Dom Movement Logging demo")} </h1>
    <WonkaClickEventDemo />
    <br />
    <WonkaFromDomEventScanDemo />
    <br />
    <RxJsScanDemo />
  </div>;
};
