// /* import { fromEvent } from 'rxjs';
//    import { scan } from 'rxjs/operators';

//    fromEvent(document, 'click')
//      .pipe(scan(count => count + 1, 0))
//      .subscribe(count => console.log(`Clicked ${count} times`)); */

// [@react.component]
// let make = () => {
//   React.useEffect0(() => {
//     open Webapi.Dom;
//     open RxJs;
//     let operator = Operator.fromEvent(document, "click");

//     operator
//     ->Operator.(pipe(scan(count => (count + 1, 0), count)))
//     ->Observable.subscribe(
//         ~next=x => Js.log3("Click value ", x, "times"),
//         ~error=err => Js.log2("something wrong occurred", err),
//         ~complete=() => Js.log("done"),
//         (),
//       )
//     |> ignore;
//     None;
//   });
//   <div>
//     <h1> "Open Console and click around the screen"->React.string </h1>
//   </div>;
// };