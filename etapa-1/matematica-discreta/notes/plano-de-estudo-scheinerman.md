---
title: "Plano de Estudo — Matemática Discreta: Uma Introdução (Scheinerman, 3ª ed.)"
date: 2026-04-20
course: Matemática Discreta
etapa: 1
book: "Matemática Discreta: Uma Introdução — E.R. Scheinerman"
livro_suplementar: "Matemática Concreta — Graham, Knuth, Patashnik (suplementar em Combinatória e Recorrências)"
---

# Plano de Estudo — Scheinerman

## Capítulos ESSENCIAIS

| Capítulo | Tópico | Tempo estimado | Status |
|---|---|---|---|
| 1–2 | Lógica Proposicional e de Predicados | 6–8h | - [ ] |
| 3 | Provas (contradição, contrapositiva, indução) | 5–6h | - [ ] |
| 4 | Conjuntos | 4–5h | - [ ] |
| 5 | Relações | 5–6h | - [ ] |
| 6 | Funções | 3–4h | - [ ] |
| 7 | Indução e Recursão | 6–8h | - [ ] |
| 8–9 | Combinatória e Contagem | 6–8h | - [ ] |
| 10 | Recorrências | 5–6h | - [ ] |
| 14–15 | Introdução a Grafos | 5–6h | - [ ] |

## Capítulos IMPORTANTES

| Capítulo | Tópico | Tempo estimado | Status |
|---|---|---|---|
| 11 | Teoria dos Números | 4–5h | - [ ] |
| 12 | Probabilidade Discreta | 4–5h | - [ ] |

## Capítulos SKIP (por agora)

| Capítulo | Motivo |
|---|---|
| Álgebra Abstrata (se houver) | Conteúdo de etapas posteriores — não é pré-requisito para nada na etapa 1 |

---

## Exercícios por Capítulo

**Cap. 1–2 (Lógica):**
Faça todos os exercícios de construção de tabela-verdade e negação de predicados. Não assuma que sabe porque programa — lógica formal tem armadilhas que `if/else` esconde.

**Cap. 3 (Provas):**
Faça **todos** os exercícios, sem exceção. Provar formalmente é habilidade motora — só se desenvolve com prática repetida. Quando travar, gasta pelo menos 20 minutos antes de ver a solução.

**Cap. 7 (Indução):**
Faça no mínimo 10 exercícios de indução forte. Prioriza os exercícios sobre séries e algoritmos recursivos — são os que mais aparecem em Análise de Algoritmos.

**Cap. 8–9 (Combinatória):**
Alterna entre exercícios fáceis e difíceis. Nunca consulte o gabarito antes de gastar 20 minutos tentando.

**Cap. 10 (Recorrências):**
Resolva todos os exercícios que usam o Método Mestre. Memorize as três formas do teorema.

**Cap. 14–15 (Grafos):**
Foco nos exercícios de representação (matriz de adjacência vs. lista) e propriedades básicas. Os algoritmos vêm em etapa 3.

---

## Uso do Livro Suplementar (Concrete Mathematics)

Use o Knuth **apenas** nos seguintes pontos:

| Momento | Capítulo Knuth |
|---|---|
| Após Scheinerman Cap. 8–9 (Combinatória) | Cap. 5 — Binomial Coefficients |
| Após Scheinerman Cap. 10 (Recorrências) | Cap. 1 — Recurrent Problems + Cap. 2 — Sums |

Não tente ler o Knuth de forma linear — é denso demais como livro de entrada.

---

## Conexão com Java e Backend

| Tópico Scheinerman | Onde aparece no seu dia a dia |
|---|---|
| Lógica de Predicados (Cap. 1–2) | Especificação formal de pré/pós-condições de métodos. Base de assertions e contratos |
| Relações de Ordem (Cap. 5) | `Comparable`, `Comparator` em Java têm axiomas formais (transitividade, antissimetria) que você usa sem perceber |
| Funções Injetoras/Sobrejetoras (Cap. 6) | Por que `HashMap` pode ter colisões mas `TreeMap` preserva ordem — ambos são funções com propriedades distintas |
| Indução (Cap. 7) | Como provar que um algoritmo recursivo termina e está correto |
| Combinatória (Cap. 8–9) | Analisar quantas operações um loop faz — base de Big-O |
| Recorrências (Cap. 10) | T(n) = 2T(n/2) + n é o custo do MergeSort. Você já usou `Collections.sort()` sem saber provar isso |
| Teoria dos Números (Cap. 11) | Hashing, criptografia RSA, `hashCode()` em Java |

---

## Progresso de Leitura

- [ ] Cap. 1–2 — Lógica Proposicional e de Predicados
- [ ] Cap. 3 — Provas
- [ ] Cap. 4 — Conjuntos
- [ ] Cap. 5 — Relações
- [ ] Cap. 6 — Funções
- [ ] Cap. 7 — Indução e Recursão
- [ ] Cap. 8–9 — Combinatória e Contagem
- [ ] Cap. 10 — Recorrências
- [ ] Cap. 11 — Teoria dos Números
- [ ] Cap. 12 — Probabilidade Discreta
- [ ] Cap. 14–15 — Introdução a Grafos
