for n in {1..3}
do
        filename="${n}_text.txt"
        touch "$filename" | xargs echo "PROCESSED" >> $filename
done
