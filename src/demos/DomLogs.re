open Webapi.Dom;
type state = {
  screenX: int,
  screenY: int,
};

type action =
  | SetXY(int, int);

let reducer = (_, action) =>
  switch (action) {
  | SetXY(screenX, screenY) => {screenX, screenY}
  };
[@react.component]
let make = () => {
  let (state, dispatch) =
    React.useReducer(reducer, {screenX: 0, screenY: 0});
  // let document = Webapi.Dom.document;
  let handleMouseEvent = (e: Dom.mouseEvent) => {
    let screenX = Webapi.Dom.MouseEvent.screenX(e);
    let screenY = Webapi.Dom.MouseEvent.screenY(e);
    dispatch(SetXY(screenX, screenY));
  };

  React.useEffect0(() => {
    /* see: https://github.com/reasonml-community/bs-webapi-incubator/blob/6b2a63ebce3f96159a2d0e9efcb853d1fd43f497/examples/dom_example.re#L96 */
    Webapi.Dom.Document.addMouseMoveEventListener(handleMouseEvent, document);
    Some(
      () =>
        Webapi.Dom.Document.removeMouseDownEventListener(
          handleMouseEvent,
          document,
        ),
    );
  });

  <div>
    <p> {React.string("screenX" ++ state.screenX->string_of_int)} </p>
    <p> {React.string("screenY" ++ state.screenY->string_of_int)} </p>
  </div>;
};