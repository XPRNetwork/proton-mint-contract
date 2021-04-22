#pragma once

using namespace eosio;
using namespace std;
namespace proton {
  struct [[eosio::table, eosio::contract("atom")]] Resource {
    name account;
    uint64_t ram_bytes;

    uint64_t primary_key() const { return account.value; };
  };
  typedef multi_index<"resources"_n, Resource> resources_table;
}