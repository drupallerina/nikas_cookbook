<?php
/**
 * @file
 * nikas_cookbook.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function nikas_cookbook_taxonomy_default_vocabularies() {
  return array(
    'mealtype' => array(
      'name' => 'Mealtype',
      'machine_name' => 'mealtype',
      'description' => 'Type of meal (Breakfast, Dessert...)',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
