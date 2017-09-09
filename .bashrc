#Aliases
alias gcw="gcc -Wall -Wextra -Werror"
alias grep="grep --color=auto"
alias ls="ls --color=auto"
alias sl="ls"
alias lsl="ls -l"
alias lsla="ls -la"
alias vm="vim"

#Prompt
export PS1="\e[0;39m\342\224\214\e[1;96m[\w]\e[0;39m\342\224\200\e[0;95m(\u)\e[0;39m\342\224\200\e[0;95m(\@)\n\e[0;39m\342\224\224\342\224\200(\e[1;96m$\e[0;39m> "

#Misc
shopt -s -q autocd

btc ()
{
	curl -s http://api.coindesk.com/v1/bpi/currentprice.json | python -c "import json, sys; value=json.load(sys.stdin)['bpi']['USD']['rate']; print(value.split('.')[0])"
}
