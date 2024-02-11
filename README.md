# Secured

 DONE WITH Antoine Orange
## Module: B-CPE-110 (Grade: A)

## Project Description
 hashtable creation, hash function and linked list

### USAGE
 libhashtable.a
# Result: 100% (Mark: 19)
<details>
<summary>Click to expand test results</summary>

### Algorithm app. - Hash function (100% Passed)
| Test | Status |
| --- | --- |
| 01 - All input data is used during hashing #1 | PASSED |
| 02 - All input data is used during hashing #2 | PASSED |
| 03 - Two almost identical inputs give different outputs | PASSED |
| 04 - Hash function evenly distributes data in hash table | PASSED |

### Algorithm app. - Hash table (100% Passed)
| Test | Status |
| --- | --- |
| 01 - Filling hash table | PASSED |
| 02 - Inserting after deleting | PASSED |
| 03 - Deleting several items | PASSED |
| 04 - Searching severel items | PASSED |
| 05 - Fully deleting hash table | PASSED |

### Basics (100% Passed)
| Test | Status |
| --- | --- |
| 01 - Creating hash table | PASSED |
| 02 - Dumping hash table | PASSED |
| 03 - Deleting hash table | PASSED |
| 04 - Inserting item in hash table | PASSED |
| 05 - Deleting item in hash table | PASSED |
| 06 - Searching item in hash table | PASSED |

### Data structure (100% Passed)
| Test | Status |
| --- | --- |
| 01 - One collision in an index | PASSED |
| 02 - Updating existing key | PASSED |
| 03 - One collision in multiple indexes | PASSED |
| 04 - Several collisions in an index | PASSED |
| 05 - Several collisions in multiple indexes | PASSED |

### Optimization (100% Passed)
| Test | Status |
| --- | --- |
| 01 - Inserting & deleting 1.000 items | PASSED |
| 02 - Inserting & deleting 5.000 items | PASSED |
| 03 - Inserting & deleting 10.000 items | PASSED |
| 04 - Inserting & deleting 50.000 items | PASSED |
| 05 - Inserting & deleting 100.000 items | PASSED |

### Robustness (100% Passed)
| Test | Status |
| --- | --- |
| 01 - Checking new_hashtable params (len) | PASSED |
| 02 - Checking ht_insert params (ht) | PASSED |
| 03 - Checking ht_insert params (key) | PASSED |
| 04 - Checking ht_insert params (data) | PASSED |
| 05 - Checking ht_delete params (ht) | PASSED |
| 06 - Checking ht_delete params (key) | PASSED |
| 07 - Checking ht_delete params (not found) | PASSED |
| 08 - Checking ht_search params (ht) | PASSED |
| 09 - Checking ht_search params (key) | PASSED |
| 10 - Checking ht_search params (not found) | PASSED |

</details>

## Tests
bash script that calculate the number of collisions of the hash function via a word list of almost 500k words

