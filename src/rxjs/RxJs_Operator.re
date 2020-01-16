open RxJsTypes;

[@bs.module "rxjs/_esm2015/operators"]
external throttle: ('a => observable('b)) => operatorFunction('a, 'a) =
  "throttle";

[@bs.module "rxjs/_esm2015"]
external fromEvent: ('a, string) => observable(Dom.event) = "fromEvent";

[@bs.module "rxjs/_esm2015/operators"]
external scan: (('b, 'a) => 'b, 'b) => operatorFunction('a, 'b) = "scan";

[@bs.module "rxjs/_esm2015/operators"]
external throttleTime: float => operatorFunction('a, 'a) = "throttleTime";

[@bs.send] external pipe: ('a, unaryFunction('a, 'b)) => 'b = "pipe";