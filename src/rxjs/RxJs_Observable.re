open RxJsTypes;

type t('a) = observable('a);

type subscribeParams('a) = {
  next: option('a => unit),
  error: option(Js.Json.t => unit),
  complete: option(unit => unit),
};

[@bs.send]
external subscribe_: (t('a), subscribeParams('a)) => subscription =
  "subscribe";

let subscribe =
    (
      self: t('a),
      ~next: option('a => unit)=?,
      ~error: option(Js.Json.t => unit)=?,
      ~complete: option(unit => unit)=?,
      (),
    ) => {
  let args = {next, error, complete};
  subscribe_(self, args);
};

[@bs.send]
external subscribe0: (t('a), observer('a)) => subscription = "subscribe";

[@bs.module "rxjs/_esm2015"] [@bs.scope "Observable"]
external make: (observer('a) => option(unit => unit)) => observable('a) =
  "create";