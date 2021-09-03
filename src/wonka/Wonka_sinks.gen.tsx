/* TypeScript file generated from Wonka_sinks.re by genType. */
/* eslint-disable import/first */


// @ts-ignore: Implicit any on import
import * as Wonka_sinksBS__Es6Import from './Wonka_sinks.bs';
const Wonka_sinksBS: any = Wonka_sinksBS__Es6Import;

import type {sourceT as Wonka_types_sourceT} from './Wonka_types.gen';

import type {subscriptionT as Wonka_types_subscriptionT} from './Wonka_types.gen';

// tslint:disable-next-line:interface-over-type-literal
export type subscribeConsumerT<a> = (_1:Wonka_types_sourceT<a>) => Wonka_types_subscriptionT;

// tslint:disable-next-line:interface-over-type-literal
export type forEachConsumerT<a> = (_1:Wonka_types_sourceT<a>) => void;

export const subscribe: <a>(f:((_1:a) => void)) => subscribeConsumerT<a> = Wonka_sinksBS.subscribe;

export const forEach: <a>(f:((_1:a) => void)) => forEachConsumerT<a> = Wonka_sinksBS.forEach;

export const publish: <a>(source:Wonka_types_sourceT<a>) => Wonka_types_subscriptionT = Wonka_sinksBS.publish;

export const toArray: <a>(source:Wonka_types_sourceT<a>) => a[] = Wonka_sinksBS.toArray;
