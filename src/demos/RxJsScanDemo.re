// /* import { fromEvent } from 'rxjs';
//    import { scan } from 'rxjs/operators';

//    fromEvent(document, 'click')
//      .pipe(scan(count => count + 1, 0))
//      .subscribe(count => console.log(`Clicked ${count} times`)); */

[@react.component]
let make = () => {
  let (count, setCount) = React.useState(() => 0);
  React.useEffect0(() => {

    open Webapi.Dom;
    open RxJs;
    let operator = Operator.fromEvent(document, "click");

    operator
    ->Operator.(pipe(scan((count, _) => count + 1, 0)))
    ->Observable.subscribe(
        ~next=
          x => {
            setCount(_ => x);
            Js.log3("RxJsScanDemo: Click value ", x, "times");
          },
        ~error=err => Js.log2("RxJsScanDemo: something wrong occurred", err),
        ~complete=() => Js.log("RxJsScanDemo: done"),
        (),
      )
    |> ignore;
    None;
  });
  <div>
    <h1> {ReasonReact.string("RxJs Scan Click Count Demo")} </h1>
    <p> "Open Console and click around the screen"->React.string </p>
    <p> "Check Console for RxJsScanDemo"->React.string </p>
    <p> {"RxJs Scan Click count: " ++ count->string_of_int |> React.string} </p>
  </div>;
};