open ClickOutside;

module Styles = {
  open Css;

  let dropdown = style([width(px(200))]);
  let dropdownButton =
    style([border(px(1), solid, `rgba((0, 0, 0, `num(0.4)))), padding(px(4))]);

  let optionsContainer = style([position(relative)]);
  let options =
    style([
      position(absolute),
      top(px(0)),
      padding2(~h=px(0), ~v=px(4)),
      border(px(1), solid, `rgba((0, 0, 0, `num(0.4)))),
      borderTopWidth(px(0)),
      width(pct(100.0)),
      boxSizing(borderBox),
    ]);

  let optionItem = isSelected =>
    style([
      padding2(~h=px(8), ~v=px(4)),
      boxSizing(borderBox),
      backgroundColor(isSelected ? `rgba((0, 0, 0, `num(0.3))) : transparent),
    ]);
};

type state = {isOpen: bool};

type action =
  | Open
  | Close
  | Toggle;

let reducer = (state, action) => {
  switch (action) {
  | Open => {isOpen: true}
  | Close => {isOpen: false}
  | Toggle => {isOpen: !state.isOpen}
  };
};

[@react.component]
let make =
    (~selected="", ~options: array(string), ~selectOption: string => unit) => {
  let (state, dispatch) = React.useReducer(reducer, {isOpen: false});
  let dropdownRef = useClickOutside(_ => dispatch(Close));

  <div className=Styles.dropdown ref={ReactDOM.Ref.domRef(dropdownRef)}>
    <div onClick={_ => dispatch(Toggle)} className=Styles.dropdownButton>
      {React.string(selected != "" ? selected : "Select value")}
    </div>
    {state.isOpen
       ? <div className=Styles.optionsContainer>
           <div
             className=Styles.options >
             {options->Belt.Array.mapWithIndex((index, item) =>
                <div
                  key={string_of_int(index)}
                  onClick={_ => selectOption(item)}
                  className={Styles.optionItem(item == selected)}>
                  {item |> React.string}
                </div>
              )
              |> React.array}
           </div>
         </div>
       : React.null}
  </div>;
};
