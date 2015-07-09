-- =============================================================================
-- The following directives assign pins to the locations specific for the
-- CY8CKIT-042 kit.
-- =============================================================================

-- === RGB LED ===
attribute port_location of Bootloadable_Status(0) : label is "PORT(0,2)"; -- GREEN LED
