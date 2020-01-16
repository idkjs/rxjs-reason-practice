/* import { fromEvent } from 'rxjs';
   import { scan } from 'rxjs/operators';

   fromEvent(document, 'click')
     .pipe(scan(count => count + 1, 0))
     .subscribe(count => console.log(`Clicked ${count} times`));
     Reason port of: https://rxjs.dev/guide/overview purity example
       */
open Webapi.Dom;
open Document;
[@react.component]
let make = () => {
  let (count, setCount) = React.useState(() => 0);

  React.useEffect0(() => {

    let element = getElementById("root", document)->Belt.Option.getExn;
    let sub =
      Wonka.fromDomEvent(element, "click")
      |> Wonka.scan((. count, _x) => count + 1, 0)
      |> Wonka.subscribe((. count) => setCount(_ => count));
      /* Wonka provide unsubscribe function on subscriptions. See this [issue](https://github.com/kitten/wonka/issues/38#issuecomment-565754854) */
    Some(() => sub.unsubscribe());
  });
  <div>
    <h1> {ReasonReact.string("Wonka Scan Click Count Demo")} </h1>
    <p> "Open Console and click around the screen"->React.string </p>
    <p> {"Wonka Click count: " ++ count->string_of_int |> React.string} </p>
  </div>;
};