open RxJs__;

module Observable = RxJs_Observable;
module Observer = RxJs_Observer;
module Subscription = RxJs_Subscription;
module Operators = RxJs_Operators;
module ConnectableObservable = RxJs_ConnectableObservable;
module Subject = RxJs_Subject;
module AsyncSubject = RxJs_AsyncSubject;
module ReplaySubject = RxJs_ReplaySubject;
module BehaviorSubject = RxJs_BehaviorSubject;
module WebSocketSubject = RxJs_WebSocketSubject;
module Scheduler = RxJs_Scheduler;

[@bs.module "rxjs"] external asyncScheduler: Scheduler.t = "asyncScheduler";
[@bs.module "rxjs"] external asapScheduler: Scheduler.t = "asapScheduler";
[@bs.module "rxjs"] external queueScheduler: Scheduler.t = "queueScheduler";
[@bs.module "rxjs"]
external animationFrameScheduler: Scheduler.t = "animationFrameScheduler";

[@bs.module "rxjs"] [@bs.variadic]
external of_: array('a) => observable('a) = "of";

[@bs.module "rxjs"] [@bs.variadic]
external race: array(observable('a)) => observable('a) = "race";

// from iterator missing

[@bs.module "rxjs"] external fromArray: array('a) => observable('a) = "from";

[@bs.module "rxjs"]
external fromArray2: (array('a), scheduler) => observable('a) = "from";

[@bs.module "rxjs"]
external fromPromise: Js.Promise.t('a) => observable('a) = "from";
[@bs.module "rxjs"]
external fromPromise2: (Js.Promise.t('a), scheduler) => observable('a) =
  "from";

/* emit string as a sequence */
[@bs.module "rxjs"]
external fromString: string => observable(string) = "from";

[@bs.module "rxjs"]
external fromString2: (string, scheduler) => observable(string) = "from";

/* empty is deprecated in favor of using EMPTY constant */
[@bs.module "rxjs"] external empty: observable('a) = "EMPTY";
[@bs.module "rxjs"] external never: observable('a) = "NEVER";
[@bs.module "rxjs"] external interval: float => observable(int) = "interval";
[@bs.module "rxjs"]
external interval2: (float, scheduler) => observable(int) = "interval";

[@bs.module "rxjs"]
external zip2: (observable('a), observable('b)) => observable(('a, 'b)) =
  "zip";

[@bs.module "rxjs"]
external zip2R:
  (observable('a), observable('b), ('a, 'b) => 'r) => observable('r) =
  "zip";

[@bs.module "rxjs"]
external zip3:
  (observable('a), observable('b), observable('c)) =>
  observable(('a, 'b, 'c)) =
  "zip";

[@bs.module "rxjs"]
external zip3R:
  (observable('a), observable('b), observable('c), ('a, 'b, 'c) => 'r) =>
  observable('r) =
  "zip";

[@bs.module "rxjs"]
external zip4:
  (observable('a), observable('b), observable('c), observable('d)) =>
  observable(('a, 'b, 'c, 'd)) =
  "zip";

[@bs.module "rxjs"]
external zip4R:
  (
    observable('a),
    observable('b),
    observable('c),
    observable('d),
    ('a, 'b, 'c, 'd) => 'r
  ) =>
  observable('r) =
  "zip";

[@bs.module "rxjs"] [@bs.variadic]
external zip: array(observable('a)) => observable(array('a)) = "zip";

// begin timer
[@bs.module "rxjs"] external timer: unit => observable(int) = "timer";

// float timer

[@bs.module "rxjs"]
external timer3: (float, ~period: float, scheduler) => observable(int) =
  "timer";

[@bs.module "rxjs"]
external timer2: (float, ~period: float) => observable(int) = "timer";

[@bs.module "rxjs"]
external timer2S: (float, scheduler) => observable(int) = "timer";

[@bs.module "rxjs"] external timer1: float => observable(int) = "timer";

// date timer

[@bs.module "rxjs"]
external timerD3: (Js.Date.t, ~period: float, scheduler) => observable(int) =
  "timer";

[@bs.module "rxjs"]
external timerD2: (Js.Date.t, ~period: float) => observable(int) = "timer";

[@bs.module "rxjs"]
external timerD2S: (Js.Date.t, scheduler) => observable(int) = "timer";

[@bs.module "rxjs"] external timerD1: Js.Date.t => observable(int) = "timer";

// end of timer

[@bs.module "rxjs"]
external range3: (~start: int, ~count: int, scheduler) => observable(int) =
  "range";

[@bs.module "rxjs"]
external range2: (~start: int, ~count: int) => observable(int) = "range";

[@bs.module "rxjs"]
external range1: (~start: int) => observable(int) = "range";

[@bs.module "rxjs"] external range: unit => observable(int) = "range";

[@bs.module "rxjs"]
external fromEvent: (Dom.eventTarget, string) => observable(Dom.event) =
  "fromEvent";

[@bs.module "rxjs"] [@bs.variadic]
external combineLatest: array(observable('a)) => observable(array('a)) =
  "combineLatest";

[@bs.module "rxjs"]
external combineLatest2:
  (observable('a), observable('b)) => observable(('a, 'b)) =
  "combineLatest";

[@bs.module "rxjs"]
external combineLatest2S:
  (observable('a), observable('b), scheduler) => observable(('a, 'b)) =
  "combineLatest";

[@bs.module "rxjs"]
external combineLatest2R:
  (observable('a), observable('b), ('a, 'b) => 'r) => observable('r) =
  "combineLatest";

[@bs.module "rxjs"]
external combineLatest2RS:
  (observable('a), observable('b), ('a, 'b) => 'r, scheduler) =>
  observable('r) =
  "combineLatest";

[@bs.module "rxjs"]
external combineLatest3:
  (observable('a), observable('b), observable('c)) =>
  observable(('a, 'b, 'c)) =
  "combineLatest";

[@bs.module "rxjs"]
external combineLatest3S:
  (observable('a), observable('b), observable('c), scheduler) =>
  observable(('a, 'b, 'c)) =
  "combineLatest";

[@bs.module "rxjs"]
external combineLatest3R:
  (observable('a), observable('b), observable('c), ('a, 'b, 'c) => 'r) =>
  observable('r) =
  "combineLatest";

[@bs.module "rxjs"]
external combineLatest3RS:
  (
    observable('a),
    observable('b),
    observable('c),
    ('a, 'b, 'c) => 'r,
    scheduler
  ) =>
  observable('r) =
  "combineLatest";

[@bs.module "rxjs"]
external combineLatest4:
  (observable('a), observable('b), observable('c), observable('d)) =>
  observable(('a, 'b, 'c, 'd)) =
  "combineLatest";

[@bs.module "rxjs"]
external combineLatest4S:
  (
    observable('a),
    observable('b),
    observable('c),
    observable('d),
    scheduler
  ) =>
  observable(('a, 'b, 'c, 'd)) =
  "combineLatest";

[@bs.module "rxjs"]
external combineLatest4R:
  (
    observable('a),
    observable('b),
    observable('c),
    observable('d),
    ('a, 'b, 'c, 'd) => 'r
  ) =>
  observable('r) =
  "combineLatest";

[@bs.module "rxjs"]
external combineLatest4RS:
  (
    observable('a),
    observable('b),
    observable('c),
    observable('d),
    ('a, 'b, 'c, 'd) => 'r,
    scheduler
  ) =>
  observable('r) =
  "combineLatest";

[@bs.module "rxjs"] [@bs.variadic]
external forkJoin: array(observable('a)) => observable(array('a)) =
  "forkJoin";

[@bs.module "rxjs"]
external forkJoin2:
  (observable('a), observable('b)) => observable(('a, 'b)) =
  "forkJoin";

[@bs.module "rxjs"]
external forkJoin3:
  (observable('a), observable('b), observable('c)) =>
  observable(('a, 'b, 'c)) =
  "forkJoin";

[@bs.module "rxjs"]
external forkJoin4:
  (observable('a), observable('b), observable('c), observable('d)) =>
  observable(('a, 'b, 'c, 'd)) =
  "forkJoin";

// begin merge

[@bs.module "rxjs"] [@bs.variadic]
external merge: array(observable('a)) => observable('a) = "merge";

[@bs.module "rxjs"]
external merge1CS: (observable('a), int, scheduler) => observable('a) =
  "merge";

[@bs.module "rxjs"]
external merge1S: (observable('a), scheduler) => observable('a) = "merge";

[@bs.module "rxjs"]
external merge1: observable('a) => observable('a) = "merge";

[@bs.module "rxjs"]
external merge2CS:
  (observable('a), observable('a), int, scheduler) => observable('a) =
  "merge";

[@bs.module "rxjs"]
external merge2S:
  (observable('a), observable('a), scheduler) => observable('a) =
  "merge";

[@bs.module "rxjs"]
external merge2: (observable('a), observable('a)) => observable('a) =
  "merge";

[@bs.module "rxjs"]
external merge3CS:
  (observable('a), observable('a), observable('a), int, scheduler) =>
  observable('a) =
  "merge";

[@bs.module "rxjs"]
external merge3S:
  (observable('a), observable('a), observable('a), scheduler) =>
  observable('a) =
  "merge";

[@bs.module "rxjs"]
external merge3:
  (observable('a), observable('a), observable('a)) => observable('a) =
  "merge";

[@bs.module "rxjs"]
external merge4CS:
  (
    observable('a),
    observable('a),
    observable('a),
    observable('a),
    int,
    scheduler
  ) =>
  observable('a) =
  "merge";

[@bs.module "rxjs"]
external merge4S:
  (
    observable('a),
    observable('a),
    observable('a),
    observable('a),
    scheduler
  ) =>
  observable('a) =
  "merge";

[@bs.module "rxjs"]
external merge4:
  (observable('a), observable('a), observable('a), observable('a)) =>
  observable('a) =
  "merge";

// end of merge

[@bs.module "rxjs"] external throwError: 'e => observable('a) = "throwError";

[@bs.module "rxjs"]
external throwError2: ('e, scheduler) => observable('a) = "throwError";

[@bs.send]
external toPromise: observable('a) => Js.Promise.t('a) = "toPromise";

[@bs.module "rxjs"]
external iif:
  (unit => bool, ~true_: observable('a), ~false_: observable('a)) =>
  observable('a) =
  "iif";

[@bs.module "rxjs"]
external iifP:
  (unit => bool, ~true_: Js.Promise.t('a), ~false_: Js.Promise.t('a)) =>
  observable('a) =
  "iif";

// constructor skipped

// lift skipped
// forEach skipped

// bindCallback skipped
// bindNodeCallback skipped

[@bs.module "rxjs"] [@bs.variadic]
external concat: array(Observable.t('a)) => Observable.t('a) = "concat";

[@bs.module "rxjs"]
external concat2S:
  (Observable.t('a), Observable.t('a), RxJs_Scheduler.t) => Observable.t('a) =
  "concat";

[@bs.module "rxjs"]
external concat3S:
  (
    Observable.t('a),
    Observable.t('a),
    Observable.t('a),
    RxJs_Scheduler.t
  ) =>
  Observable.t('a) =
  "concat";

[@bs.module "rxjs"]
external concat4S:
  (
    Observable.t('a),
    Observable.t('a),
    Observable.t('a),
    Observable.t('a),
    RxJs_Scheduler.t
  ) =>
  Observable.t('a) =
  "concat";

[@bs.module "rxjs"]
external pairs: Js.t({..}) => Observable.t((string, Js.Json.t)) = "pairs";

[@bs.module "rxjs"]
external pairs2:
  (Js.t({..}), scheduler) => Observable.t((string, Js.Json.t)) =
  "pairs";