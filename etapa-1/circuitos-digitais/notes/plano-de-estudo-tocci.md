---
title: "Plano de Estudo — Sistemas Digitais (Tocci, 12ª ed.)"
date: 2026-04-20
course: Circuitos Digitais
etapa: 1
book: "Sistemas Digitais: Princípios e Aplicações — Ronald J. Tocci, Neal S. Widmer, Gregory L. Moss"
---

# Plano de Estudo — Tocci

## Capítulos ESSENCIAIS

| Capítulo | Tópico | Tempo estimado | Status |
|---|---|---|---|
| 2 | Sistemas de Numeração e Códigos | 3–4h | - [ ] |
| 3 | Descrição e Análise de Circuitos Lógicos | 4–5h | - [ ] |
| 4 | Álgebra Booleana e Simplificação Lógica | 6–8h | - [ ] |
| 5 | Funções Lógicas Combinacionais | 5–6h | - [ ] |
| 6 | Aritmética Digital e Circuitos Aritméticos | 4–5h | - [ ] |
| 7 | Introdução à Lógica Sequencial — Latches e Flip-Flops | 6–7h | - [ ] |
| 8 | Contadores e Registradores | 4–5h | - [ ] |
| 10 | Memória e Armazenamento | 5–6h | - [ ] |

## Capítulos IMPORTANTES

| Capítulo | Tópico | Tempo estimado | Status |
|---|---|---|---|
| 9 | Projeto de Sistemas Sequenciais Síncronos | 4–5h | - [ ] |
| 11 | Dispositivos Lógicos Programáveis | 2–3h | - [ ] |

## Capítulos SKIP

| Capítulo | Motivo |
|---|---|
| 1 | Introdução genérica — leitura de 20min no máximo |
| 12 | Famílias de CIs (TTL, CMOS) — engenharia elétrica, irrelevante para CS |
| 13 | Conversores D/A e A/D — idem |
| 14+ | Sistemas embarcados específicos — fora do escopo |

---

## Exercícios por Capítulo

**Cap. 2 — Self-test antes de ler:**
Converte `0xAF3C` para binário e decimal, e representa `-117` em complemento de 2 com 8 bits — sem consultar nada. Se acertar tudo, lê o capítulo em 30min focando apenas em BCD e paridade.

**Cap. 3 e 4:**
Faça **todos** os exercícios de simplificação booleana e Mapas de Karnaugh. É a parte mais mecânica e exige repetição para fixar.

**Cap. 6:**
Resolva todos os exercícios de somadores e subtratores com complemento de 2. A intuição aqui é pré-requisito direto para Arquitetura de Computadores I.

**Cap. 7 e 8:**
Faça os exercícios de traçado de diagrama de tempo (timing diagrams). É onde a teoria de estado se torna concreta.

**Cap. 10:**
Leitura prioritária, exercícios opcionais — o conceito importa mais que o cálculo aqui.

---

## Conexão com Java e Backend

| Tópico Tocci | Onde aparece no seu dia a dia |
|---|---|
| Complemento de 2 (Cap. 2) | `int` overflow em Java, operadores `>>>` vs `>>` |
| Álgebra Booleana (Cap. 4) | Como o JIT otimiza expressões condicionais e short-circuit evaluation |
| Circuitos Combinacionais (Cap. 5) | Base da ALU — o que a JVM compila para quando faz operações aritméticas |
| Aritmética Digital (Cap. 6) | Por que `0.1 + 0.2 != 0.3` em ponto flutuante (IEEE 754) |
| Flip-Flops (Cap. 7) | Registradores da CPU onde a JVM armazena variáveis locais durante execução |
| Memória (Cap. 10) | Cache L1/L2/L3 — explica por que iterar um array é muito mais rápido que acesso aleatório |

---

## Progresso de Leitura

- [ ] Cap. 2 — Sistemas de Numeração e Códigos
- [ ] Cap. 3 — Descrição e Análise de Circuitos Lógicos
- [ ] Cap. 4 — Álgebra Booleana e Simplificação Lógica
- [ ] Cap. 5 — Funções Lógicas Combinacionais
- [ ] Cap. 6 — Aritmética Digital e Circuitos Aritméticos
- [ ] Cap. 7 — Introdução à Lógica Sequencial
- [ ] Cap. 8 — Contadores e Registradores
- [ ] Cap. 9 — Projeto de Sistemas Sequenciais Síncronos
- [ ] Cap. 10 — Memória e Armazenamento
- [ ] Cap. 11 — Dispositivos Lógicos Programáveis
