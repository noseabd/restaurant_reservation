<?php

/**
 * @file
 * Admin callbacks for the restaurant_reservation module.
 */

/**
 * Page callback for admin/reservations/add.
 */
function restaurant_reservation_add_reservation_admin() {
  // Return content for node/add/reservation path.
  return menu_execute_active_handler('node/add/reservation');
}