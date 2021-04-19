﻿using Course_order.Entities.Enums;
using System;
using System.Collections.Generic;
using System.Text;

namespace Course_order.Entities
{
    class Order
    {
        public int Id { get; set; }
        public DateTime Moment { get; set; }
        public OrderStatus Status { get; set; }


        public override string ToString()
        {
            return Id + ", " + Moment + ", " + Status;
        }
    }
}
