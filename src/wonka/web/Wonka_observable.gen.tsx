/* TypeScript file generated from Wonka_observable.re by genType. */
/* eslint-disable import/first */


// @ts-ignore: Implicit any on import
import * as Wonka_observableBS__Es6Import from './Wonka_observable.bs';
const Wonka_observableBS: any = Wonka_observableBS__Es6Import;

import type {observableObserverT as $$observableObserverT} from '../shims/Js.shim';

import type {observableSubscriptionT as $$observableSubscriptionT} from '../shims/Js.shim';

import type {observableT as $$observableT} from '../shims/Js.shim';

import type {sourceT as Wonka_types_sourceT} from '../../../src/wonka/Wonka_types.gen';

// tslint:disable-next-line:interface-over-type-literal
export type observableSubscriptionT = $$observableSubscriptionT;

// tslint:disable-next-line:interface-over-type-literal
export type observableObserverT<a> = $$observableObserverT<a>;

// tslint:disable-next-line:interface-over-type-literal
export type observableT<a> = $$observableT<a>;

export const fromObservable: <a>(input:observableT<a>) => Wonka_types_sourceT<a> = Wonka_observableBS.fromObservable;

export const toObservable: <a>(source:Wonka_types_sourceT<a>) => observableT<a> = Wonka_observableBS.toObservable;
