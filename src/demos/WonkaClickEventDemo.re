/* import { fromEvent } from 'rxjs';

   fromEvent(document, 'click').subscribe(() => console.log('Clicked!'));
  Reason port of: https://rxjs.dev/guide/overview first example
    */
open Webapi.Dom;
open Document;
[@react.component]
let make = () => {
  let handleMouseDown = (e: Dom.mouseEvent) => {
    Js.log2("click: ", e);
  };

  React.useEffect0(() => {
    let element = getElementById("root", document)->Belt.Option.getExn;
    Wonka.fromDomEvent(element, "click")
    |> Wonka.subscribe((. click) => Js.log2("Wonka Click: ",click))|>ignore;
    None;
  });
  <div>
    <h1> "Open Console and click around the screen"->React.string </h1>
    <p> "Look for Wonka Click in console"->React.string </p>
  </div>;
};
