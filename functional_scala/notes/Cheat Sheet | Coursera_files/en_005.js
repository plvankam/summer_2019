(window.webpackJsonp=window.webpackJsonp||[]).push([[76],{"2RA0":function(module,exports,t){var e=t("5hF3"),a;"string"==typeof e&&(e=[[module.i,e,""]]);var n={transform:void 0},l=t("aET+")(e,n);e.locals&&(module.exports=e.locals)},"3g8Y":function(module,exports,t){var e,a,n,l;n=window,l=function(t,e,a){var n=function template(a){var n=[],l,s=a||{};return function(e,a,s){switch(e){case"countdown":n.push('<div class="vjs-control c-countdown"><span class="c-countdown-text"><em class="cif-spin cif-refresh"></em></span></div>');break;case"subtitlesMenuItem":n.push('<em class="cif-lg cif-fw c-subtitles-menu-item-selected-icon"></em><span data-js="c-subtitles-menu-item-label" class="c-subtitles-menu-item-label caption-text">'+t.escape(null==(l=a(s))?"":l)+"</span>");break;case"subtitlesOffLabel":n.push(""+t.escape(null==(l=a("Subtitles Off"))?"":l));break;case"subtitlesMenuTitle":n.push('<h3 class="vjs-menu-title headline-1-text menu-section-title">'+t.escape(null==(l=a("Subtitles"))?"":l)+"</h3>");break;case"menuDivider":n.push('<div class="c-menu-divider"></div>')}}.call(this,"controlName"in s?s.controlName:"undefined"!=typeof controlName?controlName:void 0,"_t"in s?s._t:void 0!==e?e:void 0,"label"in s?s.label:"undefined"!=typeof label?label:void 0),n.join("")};return function(t){return t&&"_t"in t&&(e=t._t.merge(e)),n(t)}},e=[t("xgPa"),t("Kq1R")],void 0===(a=function(t,e){var a;return l(t,e,a)}.apply(exports,e))||(module.exports=a)},"5hF3":function(module,exports,t){},Goki:function(module,exports,t){"use strict";var e=t("TqRt"),a=e(t("VbXa")),n=e(t("PTN7")),l=e(t("bdFs")),s=function(t){function CountdownDisplay(e,a){var n;return(n=t.call(this,e,a)||this).on(e,"timeupdate",n.updateContent),n.on(e,"durationchange",n.updateContent),n}(0,a.default)(CountdownDisplay,t);var e=CountdownDisplay.prototype;return e.createEl=function createEl(){var e=t.prototype.createEl.call(this,"div",{className:"vjs-countdown-time vjs-time-controls vjs-control"});return this.contentEl_=t.prototype.createEl.call(this,"div",{className:"vjs-countdown-time-display",innerHTML:'<span class="vjs-control-text">Current Time </span><em class="cif-spin cif-refresh"></em>'},{"aria-live":"off"}),e.appendChild(this.contentEl_),e},e.updateContent=function updateContent(){if(Number.isNaN(this.player().duration()))return;var t=this.player().duration()-this.player().currentTime();this.contentEl_.innerHTML='<span class="vjs-control-text">'+this.localize("Time Left")+"</span> "+l.default.utc(1e3*t).format("m:ss")},CountdownDisplay}(n.default.getComponent("Component"));n.default.registerComponent("CountdownDisplay",s)},KK0S:function(module,exports,t){"use strict";var e=t("TqRt");Object.defineProperty(exports,"__esModule",{value:!0}),exports.default=void 0;var a=e(t("PTN7"));t("3g8Y"),t("PRI2"),t("Goki"),t("2RA0");var n=a.default;exports.default=n},Kq1R:function(module,exports,t){var e=t("wfto"),a=e.default?e.default:{},n,l=(0,t("HdzH").default)(a);l.getLocale=function(){return"en"},module.exports=l},PRI2:function(module,exports,t){"use strict";var e=t("TqRt"),a=e(t("VbXa")),n=e(t("PTN7")),l=e(t("oYk5")),s=e(t("u5HK")),i=function(t){function CPlayToggle(e,a){var n;n=t.call(this,e,a)||this;var l=(0,s.default)("Play"),i;return n.el_.innerHTML='<span class="cif-2x cif-fw cif-play"></span>',n.el_.innerHTML+='<span class="vjs-control-text">'.concat(l,"</span>"),n.el_.setAttribute("aria-label",l),a.isAudio&&(n.el_.innerHTML='<span class="cif-fw cif-play"></span>'),n}(0,a.default)(CPlayToggle,t);var e=CPlayToggle.prototype;return e.createEl=function createEl(){var e=t.prototype.createEl.call(this),a=(0,l.default)(e);return a.attr("data-js","c-play-control"),a.addClass("c-video-control c-play-control"),e},e.handlePlay=function handlePlay(){t.prototype.handlePlay.call(this);var e=(0,s.default)("Pause");this.el_.setAttribute("aria-label",e);var a=(0,l.default)(this.el_).find("span.cif-fw"),n;a.removeClass("cif-play"),a.addClass("cif-pause"),(0,l.default)(this.el_).find("span.vjs-control-text").html(e)},e.handlePause=function handlePause(){t.prototype.handlePause.call(this);var e=(0,s.default)("Play");this.el_.setAttribute("aria-label",e);var a=(0,l.default)(this.el_).find("span.cif-fw"),n;a.removeClass("cif-pause"),a.addClass("cif-play"),(0,l.default)(this.el_).find("span.vjs-control-text").html(e)},CPlayToggle}(n.default.getComponent("PlayToggle"));n.default.registerComponent("CPlayToggle",i)},wfto:function(module,exports,t){"use strict";exports.default={"ar":true,"de":true,"es":true,"fr":true,"ja":true,"ko":true,"pseudo":true,"pt":true,"ru":true,"tr":true,"zh":true,"zh-hk":"zh-tw","zh-mo":"zh-tw","zh-tw":true}}}]);
//# sourceMappingURL=en.76.f8164ce0c81b08f82970.js.map