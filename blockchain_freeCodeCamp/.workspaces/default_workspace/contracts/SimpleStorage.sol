// SPDX-License-Identifier: MIT

pragma solidity ^0.6.0;

contract SimpleStorage {

    uint256 public favouriteNumber;
    bool favouriteBool;

    struct People {
        uint256 favouriteNumber;
        string name;
    }

    People[] public people;
    mapping(string => uint256) public nameToFavouriteNumber;

    function store(uint256 _favouriteNumber) public {
        favouriteNumber = _favouriteNumber;
    }

    function retrive() public view returns(uint256) {
        return favouriteNumber;
    }

    function addPerson(string memory _name, uint256 _favouriteNumber) public {
        people.push(People(_favouriteNumber, _name));
        nameToFavouriteNumber[_name] = _favouriteNumber;
    }
}
