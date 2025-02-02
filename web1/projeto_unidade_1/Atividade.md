# Projeto Avaliativo da Primeira Unidade

## Criar uma landpage para o curso TADS
- A visão geral da página está nos arquivos página.png e no arquivo página.pdf
- As distâncias entre elementos e outras informações visuais estão no arquivo página-medidas.pdf
- A página deve estar definida com uma largura de 1440px
- No arquivo compacado avaliacao.zip estão:
    - O arquivo index.html com os textos necessários. Atribuir os elementos HTML a cada um para reproduzir o resultado final.
    - Os arquivos de imagens

## Header
- O header é composto por uma barra de navegação e uma área de destaque!
- Ele deve ter a altura da área de visualização da página
- A imagem deve ser ajustada via CSS para ficar mais opaca
    - Deixar isso por último
    - Pesquisar como fazer

### Fonte - "Open Sans", sans-serif
- Tamanho padrão para a página: 16px
- Navbab: 
    - TADS 24px
    - Menu 16px
- Destaque:
    - Análise e Desenvolvimento de Sistemas: 60px
    - IFPE Recife 28px
- Títulos das Seções: 32px
- Destaque:
    - Ícones: 50px (Usar os ícons do Google Fonts: https://fonts.google.com/icons)
    - Títulos dos detaques: 20px
- Mercado de Trabalho:
    - Áreas de atuação: 18px
- Footer: 14px


### Cores
- Botões: #00420c
- Backgrounds:
    - Área de Atuação e Mercado de Trabalho: #ffffff
    - Destaque e Receba nossas novidades: #e9e2e2
    - footer: #414a4f

### Formulário
- O campo de e-mail deve ser validado e obigatório   

### Observações
- Além das medidas apresentadas no PDF podem existir ajustes finos de margem e padding, verifique e compare a sua página com o resultado final para identificar e fazer os ajustes caso seja necessário
- Os card em destaques ocupam 1/3 da largura
- Os itens do menu devem fazer a página rolar até o item selecionado, nã usar javascript
- Os hiperlinks não devem ser azuis e nem sublinhados. Os hiperlinks são:
    - Logo Tads
    - TADS
    - Home
    - Atuação
    - Destaque
    - Mercado
    - Baixar PPC
    - Freepick (footer)
- Pensar Flexbox, não forçar o posicionamento dos itens sem Flexbox
- Organizar os seletores indo do menos específico para o mais (caso necessário)
- Pode fazer um reset no início do CSS
- Confirgurar o box-sizing de forma apropriada
- Explorar opções do background-imagem, não se limitar ao mostrado em aula
- As imagens de Área de atuação só tem a altura definida no PDF, isso não está errado!