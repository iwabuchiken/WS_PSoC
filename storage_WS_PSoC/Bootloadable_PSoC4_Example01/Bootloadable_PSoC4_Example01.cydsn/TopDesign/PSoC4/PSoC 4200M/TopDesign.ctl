-- =============================================================================
-- The following directives assign pins to the locations specific for the
-- CY8CKIT-044 kit.
-- =============================================================================

-- === RGB LED ===
attribute port_location of Bootloadable_Status(0) : label is "PORT(2,6)"; -- GREEN LED
