open RxJs__;

type t('a) = observer('a);
[@bs.send] external next: (t('a), 'a) => unit = "";
[@bs.send] external complete: t('a) => unit = "";
[@bs.send] external error: (t('a), 'e) => unit = "";
