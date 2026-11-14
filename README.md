# 🏧 Simulador de Caixa Eletrônico em C

Um programa desenvolvido em linguagem C que simula o funcionamento básico de um caixa eletrônico, calculando a distribuição ideal de cédulas (R$ 100, R$ 50, R$ 20, R$ 10, R$ 5, R$ 2 e R$ 1) para um determinado valor de saque.

Este projeto faz parte de um exercício prático de lógica de programação, convertendo conceitos inicias (como Portugol) para a linguagem C, com foco em divisão inteira (`/`) e operador módulo/resto (`%`).

---

## 🚀 Funcionalidades

- **Validação de Entrada:** Verifica se o usuário digitou um número inteiro válido (evitando falhas por caracteres inválidos).
- **Validação de Regras de Negócio:**
  - Garante que o valor do saque seja maior que zero.
  - Verifica se há saldo suficiente na conta (saldo inicial fixado em **R$ 2.000** para testes).
- **Algoritmo de Saque Otimizado:** Calcula automaticamente a menor quantidade de notas possíveis para entregar o valor solicitado.
- **Exibição Inteligente:** Mostra apenas as notas cuja quantidade seja maior que zero (`> 0`).

---

## 🛠️ Tecnologias Utilizadas

- **Linguagem C** (Padrão C99 ou superior)
- **Compilador compatível** (GCC, Clang, MinGW, MSVC)

---

## 📂 Estrutura do Projeto

```text
CAIXA-ELETRONICO/
├── .github/
│   └── workflows/
│       └── ci.yml        # Configuração do GitHub Actions (CI C/C++)
├── main.c                # Código-fonte principal do simulador
└── README.md             # Documentação do projeto
