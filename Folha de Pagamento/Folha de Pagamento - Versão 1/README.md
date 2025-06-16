# Folha de Pagamento - Versão 1

Este projeto é um programa em C que simula o cálculo de um holerite (folha de pagamento), considerando os principais proventos e descontos aplicados ao salário de um trabalhador.

---

## 📜 Descrição

Este programa em C foi criado para simular de forma interativa a construção de um holerite, detalhando os cálculos de proventos e descontos comuns na legislação trabalhista brasileira.

O usuário informa dados como salário base, jornada de trabalho, se houve horas extras e o cálculo do DSR. O sistema também pergunta sobre adicionais de periculosidade e insalubridade.

Nos descontos, são considerados: Vale Refeição, Convênio de Saúde, Contribuição Sindical e Vale Transporte.

O programa então calcula o INSS e o IRRF, o Salário Família (se aplicável) e o FGTS.

Ao final, é exibido um demonstrativo da folha de pagamento, mostrando o salário líquido e todos os valores de proventos e descontos detalhadamente.

---

## 🛠️ Tecnologias Utilizadas

- 🧠 **Linguagem:** C
- 🖥️ **IDE:** VSCode (opcional)
- 🔧 **Compilador:** GCC

---

## 🚀 Como Executar

### ✔️ Pré-requisitos

Possuir um compilador C instalado:

- **Linux:**  
GCC costuma vir pré-instalado, mas caso não, execute:  
```bash
sudo apt update
sudo apt install build-essential
```

- **Windows:**  
Instale o [MinGW-w64](https://www.mingw-w64.org/) e configure as variáveis de ambiente para usar o GCC no terminal.

---

### ✔️ Compilar e Executar

1️⃣ Salve o código em um arquivo com a extensão .c.  
Exemplo: ```arquivo.c```

2️⃣ Abra o terminal e navegue até o diretório onde está o arquivo:  
```bash
cd caminho/para/sua/pasta
```

3️⃣ Compile o programa:  
```bash
gcc arquivo.c -o Programa
```

4️⃣ Execute o programa:  
```bash
./Programa
```

## 🤝 Contribuições

Contribuições são bem-vindas!  

---

## 🙌 Autor

Desenvolvido por **Paulo Sergio Vicente**. 
