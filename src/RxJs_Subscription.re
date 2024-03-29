open RxJs__;

type t = subscription;

[@bs.send] external unsubscribe: t => unit = "unsubscribe";

[@bs.get] external closed: t => bool = "closed";

[@bs.module "rxjs"] [@bs.scope "Subscription"] external empty: t = "EMPTY";

[@bs.new] [@bs.module "rxjs"] external make: unit => t = "Subscription";

[@bs.new] [@bs.module "rxjs"]
external makeU: (unit => unit) => t = "Subscription";

[@bs.send] external add: (t, t) => t = "add";
[@bs.send] external addT: (t, unit => unit) => t = "add";

[@bs.send] external remove: (t, t) => unit = "remove";
