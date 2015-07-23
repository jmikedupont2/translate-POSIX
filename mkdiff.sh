#! /bin/bash

diffdir=diff-2001-2008
rm -rf $diffdir
rm eqfiles
mkdir $diffdir

difffun(){
    diff \
	<(cat $1 | sed -z 's/\n/ /g' | sed 's/>\(.\)/>\n\1/g; s/\(.\)</\1\n</g' | grep -v '^<')\
	<(cat en/$2 | sed -z 's/\n/ /g' | sed 's/>\(.\)/>\n\1/g; s/\(.\)</\1\n</g' | grep -v '^<')\
	> $diffdir/$2 
	ret=$?
	[ $ret == 0 ] && echo !!!!!!!!!!!!! equal !!!!!!!!!! >> eqfiles
	[ $ret != 2 ] && echo $1 en/$2 >> eqfiles
}

subdir=
echo ==== $subdir ==== | tee -a eqfiles
for file in 007904975/$subdir*; do
    [ -d $file ] && continue
    file=$(basename $file)
	difffun 007904975/$subdir$file $subdir$file
done


subdir=frontmatter/
mkdir $diffdir/$subdir
echo ==== $subdir ==== | tee -a eqfiles
for file in 007904975/$subdir*; do
    [ -d $file ] && continue
    file=$(basename $file)
	difffun 007904975/$subdir$file $subdir$file
done

subdir=basedefs/
mkdir $diffdir/$subdir
echo ==== $subdir - common ==== | tee -a eqfiles
for file in 007904975/$subdir*; do
    [ -d $file ] && continue
    file=$(basename $file)
	difffun 007904975/$subdir$file $subdir$file
done
echo ==== $subdir - xbd_ - V1_ ==== | tee -a eqfiles
for file in 007904975/${subdir}xbd_*; do
    [ -d $file ] && continue
    file=$(basename $file)
    file=${file#xbd_}
	difffun 007904975/${subdir}xbd_$file ${subdir}V1_$file
done
echo ==== $subdir - dir/file - dir_file ==== | tee -a eqfiles
for file in 007904975/$subdir*/*; do
    [ -d $file ] && continue
    dir=$(basename $(dirname $file))
    file=$(basename $file)
	difffun 007904975/$subdir$dir/$file $subdir${dir}_$file
done

subdir=functions/
mkdir $diffdir/$subdir
echo ==== $subdir - common ==== | tee -a eqfiles
for file in 007904975/$subdir*; do
    [ -d $file ] && continue
    file=$(basename $file)
	difffun 007904975/$subdir$file $subdir$file
done
echo ==== $subdir - xsh_ - V2_ ==== | tee -a eqfiles
for file in 007904975/${subdir}xsh_*; do
    [ -d $file ] && continue
    file=$(basename $file)
    file=${file#xsh_}
	difffun 007904975/${subdir}xsh_$file ${subdir}V2_$file
done

subdir=utilities/
mkdir $diffdir/$subdir
echo ==== $subdir - common ==== | tee -a eqfiles
for file in 007904975/$subdir*; do
    [ -d $file ] && continue
    file=$(basename $file)
	difffun 007904975/$subdir$file $subdir$file
done
echo ==== $subdir - xcu_ - V3 ==== | tee -a eqfiles
for file in 007904975/${subdir}xcu_*; do
    [ -d $file ] && continue
    file=$(basename $file)
    file=${file#xcu_}
	difffun 007904975/${subdir}xcu_$file ${subdir}V3_$file
done

subdir=xrat/
mkdir $diffdir/$subdir
echo ==== $subdir - common ==== | tee -a eqfiles
for file in 007904975/$subdir*; do
    [ -d $file ] && continue
    file=$(basename $file)
    difffun 007904975/$subdir$file $subdir$file
done
echo ==== $subdir - x - V4_x ==== | tee -a eqfiles
for file in 007904975/${subdir}*; do
    [ -d $file ] && continue
    file=$(basename $file)
    difffun 007904975/${subdir}$file ${subdir}V4_$file 
done

subdir=help/
mkdir $diffdir/$subdir
echo ==== $subdir ==== | tee -a eqfiles
for file in 007904975/$subdir*; do
    [ -d $file ] && continue
    file=$(basename $file)
    difffun 007904975/$subdir$file $subdir$file 
done

subdir=idx/
mkdir $diffdir/$subdir
echo ==== $subdir ==== | tee -a eqfiles
for file in 007904975/$subdir*; do
    [ -d $file ] && continue
    file=$(basename $file)
    difffun 007904975/$subdir$file $subdir$file 
done

subdir=download/
mkdir $diffdir/$subdir
echo ==== $subdir ==== | tee -a eqfiles
for file in 007904975/$subdir*; do
    [ -d $file ] && continue
    file=$(basename $file)
    difffun 007904975/$subdir$file $subdir$file 
done

subdir=Figures/
echo ==== $subdir ==== | tee -a eqfiles
mkdir $diffdir/$subdir
for file in 007904975/$subdir*; do
    [ -d $file ] && continue
    file=$(basename $file)
    difffun 007904975/$subdir$file $subdir$file 
done

subdir=images/
echo ==== $subdir ==== | tee -a eqfiles
mkdir $diffdir/$subdir
for file in 007904975/$subdir*; do
    [ -d $file ] && continue
    file=$(basename $file)
    difffun 007904975/$subdir$file $subdir$file 
done

subdir=jscript/
echo ==== $subdir ==== | tee -a eqfiles
mkdir $diffdir/$subdir
for file in 007904975/$subdir*; do
    [ -d $file ] && continue
    file=$(basename $file)
    difffun 007904975/$subdir$file $subdir$file 
done
