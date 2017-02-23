ldapsearch -Q "uid=z*" cn | grep cn: | sort -fr | sed 's/cn: //'
