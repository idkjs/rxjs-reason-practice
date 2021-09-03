/* TypeScript file generated from Wonka_sources.re by genType. */
/* eslint-disable import/first */


// @ts-ignore: Implicit any on import
import * as Wonka_sourcesBS__Es6Import from './Wonka_sources.bs';
const Wonka_sourcesBS: any = Wonka_sourcesBS__Es6Import;

import type {list} from '../../src/wonka/shims/ReasonPervasives.shim';

import type {observerT as Wonka_types_observerT} from './Wonka_types.gen';

import type {sinkT as Wonka_types_sinkT} from './Wonka_types.gen';

import type {sourceT as Wonka_types_sourceT} from './Wonka_types.gen';

import type {subjectT as Wonka_types_subjectT} from './Wonka_types.gen';

import type {teardownT as Wonka_types_teardownT} from './Wonka_types.gen';

export const fromArray: <a>(arr:a[]) => Wonka_types_sourceT<a> = Wonka_sourcesBS.fromArray;

export const fromList: <a>(ls:list<a>) => Wonka_types_sourceT<a> = Wonka_sourcesBS.fromList;

export const fromValue: <a>(x:a) => Wonka_types_sourceT<a> = Wonka_sourcesBS.fromValue;

export const make: <a>(f:((_1:Wonka_types_observerT<a>) => Wonka_types_teardownT)) => Wonka_types_sourceT<a> = Wonka_sourcesBS.make;

export const makeSubject: <a>() => Wonka_types_subjectT<a> = Wonka_sourcesBS.makeSubject;

export const empty: <a>(sink:Wonka_types_sinkT<a>) => void = Wonka_sourcesBS.empty;

export const never: <a>(sink:Wonka_types_sinkT<a>) => void = Wonka_sourcesBS.never;
