// /* import { fromEvent } from 'rxjs';
/*    fromEvent(document, 'click').subscribe(() => console.log('Clicked!'));
      source: https://rxjs.dev/guide/overview

        **/
[@react.component]
let make = () => {
  React.useEffect0(() => {
    open Webapi.Dom;
    open RxJs;
    let operator = Operator.fromEvent(document, "click");

    operator->Observable.subscribe(
      ~next=x => Js.log2("got value", x),
      ~error=err => Js.log2("something wrong occurred", err),
      ~complete=() => Js.log("done"),
      (),
    )
    |> ignore;
    None;
  });
  <div>
    <h1> "Open Console and click around the screen"->React.string </h1>
  </div>;
};