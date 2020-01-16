// /* import { fromEvent } from 'rxjs';

//    fromEvent(document, 'click').subscribe(() => console.log('Clicked!')); */
// open Webapi.Dom;
// open Wonka;
// [@react.component]
// let make = () => {
//   let handleMouseDown = (e: Dom.mouseEvent) => {
//     Js.log2("click: ", e);
//   };

//   React.useEffect0(() => {

//     let element = Document.getElementById("root", document);
//     Wonka.fromDomEvent(element, "click")
//     |> Wonka.subscribe((. click) => Js.log(click));
//     Some(
//       () => Document.removeMouseDownEventListener(handleMouseDown, document),
//     );
//   });
//   <div>
//     <h1> "Open Console and click around the screen"->React.string </h1>
//   </div>;
// };