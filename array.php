<p>
<?php
// Create the array with 20 random elements from range 0-100.
$table = array();

for ($i=0; $i < 20; $i++)
		{array_push ($table, rand(0,100));
	};

$count= count($table);

echo "Numbers of array's elements is ".$count.".";
?>
</p>
<p>
<?php
echo "Array contents:";?><br>

<?php

//Print unsorted table.
print_r($table);

//Sort table.
sort($table);
?>
<?php

echo "After sort operation, this array contents elements in alphabetical order now:";?><br>

<?php
//Print sorted array
print_r($table);
unset $table;
?>
</p>