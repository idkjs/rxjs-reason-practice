/* TypeScript file generated from WonkaJs.re by genType. */
/* eslint-disable import/first */


// tslint:disable-next-line:no-var-requires
const Curry = require('bs-platform/lib/es6/curry.js');

// tslint:disable-next-line:no-var-requires
const WonkaJsBS = require('./WonkaJs.bs');

import {callbagT as Wonka_callbag_callbagT} from './Wonka_callbag.gen';

import {element as Dom_element} from '../../../src/wonka/shims/Dom.shim';

import {event as Dom_event} from '../../../src/wonka/shims/Dom.shim';

import {observableT as Wonka_observable_observableT} from './Wonka_observable.gen';

import {operatorT as Wonka_types_operatorT} from '../../../src/wonka/Wonka_types.gen';

import {sourceT as Wonka_types_sourceT} from '../../../src/wonka/Wonka_types.gen';

export const fromObservable: <T1>(_1:Wonka_observable_observableT<T1>) => Wonka_types_sourceT<T1> = WonkaJsBS.fromObservable;

export const toObservable: <T1>(_1:Wonka_types_sourceT<T1>) => Wonka_observable_observableT<T1> = WonkaJsBS.toObservable;

export const fromCallbag: <T1>(_1:Wonka_callbag_callbagT<T1>) => Wonka_types_sourceT<T1> = WonkaJsBS.fromCallbag;

export const toCallbag: <T1>(_1:Wonka_types_sourceT<T1>) => Wonka_callbag_callbagT<T1> = WonkaJsBS.toCallbag;

export const debounce: <a>(_1:((_1:a) => number)) => Wonka_types_operatorT<a,a> = WonkaJsBS.debounce;

export const delay: <a>(_1:number) => Wonka_types_operatorT<a,a> = WonkaJsBS.delay;

export const throttle: <a>(_1:((_1:a) => number)) => Wonka_types_operatorT<a,a> = WonkaJsBS.throttle;

export const toPromise: <a>(_1:Wonka_types_sourceT<a>) => Promise<a> = WonkaJsBS.toPromise;

export const interval: (_1:number) => Wonka_types_sourceT<number> = WonkaJsBS.interval;

export const fromDomEvent: (_1:Dom_element, _2:string) => Wonka_types_sourceT<Dom_event> = function (Arg1: any, Arg2: any) {
  const result = Curry._2(WonkaJsBS.fromDomEvent, Arg1, Arg2);
  return result
};

export const fromPromise: <a>(_1:Promise<a>) => Wonka_types_sourceT<a> = WonkaJsBS.fromPromise;
