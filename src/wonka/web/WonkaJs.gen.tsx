/* TypeScript file generated from WonkaJs.re by genType. */
/* eslint-disable import/first */


// @ts-ignore: Implicit any on import
import * as Curry__Es6Import from 'bs-platform/lib/es6/curry.js';
const Curry: any = Curry__Es6Import;

// @ts-ignore: Implicit any on import
import * as WonkaJsBS__Es6Import from './WonkaJs.bs';
const WonkaJsBS: any = WonkaJsBS__Es6Import;

import type {callbagT as Wonka_callbag_callbagT} from './Wonka_callbag.gen';

import type {element as Dom_element} from '../../../src/wonka/shims/Dom.shim';

import type {event as Dom_event} from '../../../src/wonka/shims/Dom.shim';

import type {observableT as Wonka_observable_observableT} from './Wonka_observable.gen';

import type {operatorT as Wonka_types_operatorT} from '../../../src/wonka/Wonka_types.gen';

import type {sourceT as Wonka_types_sourceT} from '../../../src/wonka/Wonka_types.gen';

export const fromObservable: <T1>(_1:Wonka_observable_observableT<T1>) => Wonka_types_sourceT<T1> = WonkaJsBS.fromObservable;

export const toObservable: <T1>(_1:Wonka_types_sourceT<T1>) => Wonka_observable_observableT<T1> = WonkaJsBS.toObservable;

export const fromCallbag: <T1>(_1:Wonka_callbag_callbagT<T1>) => Wonka_types_sourceT<T1> = WonkaJsBS.fromCallbag;

export const toCallbag: <T1>(_1:Wonka_types_sourceT<T1>) => Wonka_callbag_callbagT<T1> = WonkaJsBS.toCallbag;

export const debounce: <a>(f:((_1:a) => number)) => Wonka_types_operatorT<a,a> = WonkaJsBS.debounce;

export const delay: <a>(wait:number) => Wonka_types_operatorT<a,a> = WonkaJsBS.delay;

export const throttle: <a>(f:((_1:a) => number)) => Wonka_types_operatorT<a,a> = WonkaJsBS.throttle;

export const toPromise: <a>(source:Wonka_types_sourceT<a>) => Promise<a> = WonkaJsBS.toPromise;

export const interval: (p:number) => Wonka_types_sourceT<number> = WonkaJsBS.interval;

export const fromDomEvent: (element:Dom_element, event:string) => Wonka_types_sourceT<Dom_event> = function (Arg1: any, Arg2: any) {
  const result = Curry._2(WonkaJsBS.fromDomEvent, Arg1, Arg2);
  return result
};

export const fromPromise: <a>(promise:Promise<a>) => Wonka_types_sourceT<a> = WonkaJsBS.fromPromise;
