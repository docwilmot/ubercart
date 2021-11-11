<?php

/**
 * @file
 * Provides Entity integration.
 */

/**
 * The class used for profile entities.
 */
class UCProduct extends Entity {
  public $title;
  public $model;
  public $list_price;
  public $cost;
  public $sell_price;
  public $shippable;
  public $weight;
  public $weight_units;
  public $length;
  public $width;
  public $height;
  public $length_units;
  public $pkg_qty;
  public $default_qty;
  public $ordering;

  /**
   * The profile id.
   *
   * @var integer
   */
  public $nid;

  /**
   * The name of the profile type.
   *
   * @var string
   */
  public $type;

  /**
   * The profile label.
   *
   * @var string
   */
  public $label;

  /**
   * The user id of the profile owner.
   *
   * @var integer
   */
  public $uid;

  /**
   * The Unix timestamp when the profile was created.
   *
   * @var integer
   */
  public $created;

  /**
   * The Unix timestamp when the profile was most recently saved.
   *
   * @var integer
   */
  public $changed;


  /**
   * Returns the full url() for the profile.
   */
  public function url() {
    $uri = $this->uri();
    return url($uri['path'], $uri);
  }

  /**
   * Returns the backdrop path to this profile.
   */
  public function path() {
    $uri = $this->uri();
    return $uri['path'];
  }

  public function uri() {
    return array(
      'path' => 'product/' . $this->nid,
    );
  }

  /**
   * Implements EntityInterface::id().
   */
  public function id() {
    return $this->nid;
  }

  /**
   * Implements EntityInterface::entityType().
   */
  public function entityType() {
    return 'uc_product';
  }

  /**
   * Implements EntityInterface::label().
   */
  public function label() {
    return $this->label;
  }

}


/**
 * The class used for profile entities.
 */
class UCProductVariation extends UCProduct {

  /**
   * The profile id.
   *
   * @var integer
   */
  public $nid;

  /**
   * The parent product's nid.
   *
   * @var integer
   */
  public $pnid;

  /**
   * The name of the profile type.
   *
   * @var string
   */
  public $type;

  /**
   * The profile label.
   *
   * @var string
   */
  public $label;

  /**
   * The user id of the profile owner.
   *
   * @var integer
   */
  public $uid;

  /**
   * The Unix timestamp when the profile was created.
   *
   * @var integer
   */
  public $created;

  /**
   * The Unix timestamp when the profile was most recently saved.
   *
   * @var integer
   */
  public $changed;


  /**
   * Returns the full url() for the profile.
   */
  public function url() {
    $uri = $this->uri();
    return url($uri['path'], $uri);
  }

  /**
   * Returns the backdrop path to this profile.
   */
  public function path() {
    $uri = $this->uri();
    return $uri['path'];
  }

  public function uri() {
    return array(
      'path' => 'product-variation/' . $this->nid,
    );
  }

  /**
   * Implements EntityInterface::id().
   */
  public function id() {
    return $this->nid;
  }

  /**
   * Implements EntityInterface::entityType().
   */
  public function entityType() {
    return 'uc_product_variation';
  }

  /**
   * Implements EntityInterface::label().
   */
  public function label() {
    return $this->label;
  }

}
