/* TypeScript file generated from Wonka_callbag.re by genType. */
/* eslint-disable import/first */


// @ts-ignore: Implicit any on import
import * as Wonka_callbagBS__Es6Import from './Wonka_callbag.bs';
const Wonka_callbagBS: any = Wonka_callbagBS__Es6Import;

import type {callbagT as $$callbagT} from '../shims/Js.shim';

import type {sourceT as Wonka_types_sourceT} from '../../../src/wonka/Wonka_types.gen';

// tslint:disable-next-line:interface-over-type-literal
export type callbagSignal = 0 | 1 | 2;

// tslint:disable-next-line:max-classes-per-file 
// tslint:disable-next-line:class-name
export abstract class callbagData<a> { protected opaque!: a }; /* simulate opaque types */

// tslint:disable-next-line:interface-over-type-literal
export type callbagTalkback = (_1:callbagSignal) => void;

// tslint:disable-next-line:interface-over-type-literal
export type callbagT<a> = $$callbagT<a>;

export const fromCallbag: <a>(callbag:callbagT<a>) => Wonka_types_sourceT<a> = Wonka_callbagBS.fromCallbag;

export const toCallbag: <a>(source:Wonka_types_sourceT<a>) => callbagT<a> = Wonka_callbagBS.toCallbag;
