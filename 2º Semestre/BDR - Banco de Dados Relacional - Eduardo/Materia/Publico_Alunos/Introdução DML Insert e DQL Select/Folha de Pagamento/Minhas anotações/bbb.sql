Isso aí é o clássico **JOIN em cascata** (ou tabela associativa / tabela de ligação, aquela famosa tabela N para N que tem duas chaves estrangeiras).

Para puxar dados através de uma tabela de ligação, a regra é simples: **você faz um JOIN por salto**. Você não pula direto da tabela A para a tabela C; você passa pela tabela do meio.

### O Exemplo Clássico (Ex: Aluno -> Matrícula -> Disciplina)

Imagine que você quer o nome do aluno e o nome da disciplina que ele cursa. Mas esses dados estão separados:

1. Tabela `alunos` (tem o nome do aluno)
2. Tabela `matriculas` (tabela do meio, só tem `id_aluno` e `id_disciplina`)
3. Tabela `disciplinas` (tem o nome da matéria)

Para ligar tudo isso, você faz **dois JOINs em sequência**:

```sql
SELECT a.nm_aluno AS Aluno,
       d.nm_disciplina AS Disciplina
FROM alunos AS a
JOIN matriculas AS m 
    ON a.id_aluno = m.id_aluno          -- Primeiro salto: vai da tabela principal para a tabela do meio
JOIN disciplinas AS d 
    ON m.id_disciplina = d.id_disciplina  -- Segundo salto: vai da tabela do meio para a tabela final

```

### O Macete para não errar na prova:

1. **Comece pela tabela principal** no `FROM` (ex: `FROM funcionarios` ou `FROM veiculos`).
2. **Faça o primeiro JOIN** ligando a tabela principal até a tabela de ligação (usando a FK da tabela principal com a PK da tabela do meio).
3. **Faça o segundo JOIN** ligando a tabela de ligação até a tabela final que tem a informação que você quer mostrar (usando a outra FK da tabela do meio com a PK da tabela final).
4. O `SELECT` e o `WHERE` continuam funcionando normalmente com os apelidos (`AS`) que você criou.

Tem algum exercício específico da lista de hoje que usa essa tabela de ligação? Manda ele aqui que a gente monta o esqueleto certinho!